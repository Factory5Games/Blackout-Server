modded class IngameHud
{
	override void InitBadgesAndNotifiers()
	{
		super.InitBadgesAndNotifiers();
		
		// For Thirsty, Hungry, Health, Blood, Temperature icons
		for ( int j = 0; j < m_StatesWidgetNames.Count(); j++ )
		{
			string wgt_name = m_StatesWidgetNames.GetElement(j);
			
			// This if statement is to add support for mods which add custom StatesWidgets
			if (wgt_name == "Thirsty" || wgt_name == "Hungry" || wgt_name == "Health" || wgt_name == "Blood" || wgt_name == "Temperature")
			{
				ImageWidget wgt;
				Class.CastTo(wgt,  m_Notifiers.FindAnyWidget( String( "Icon" + wgt_name ) ) );
				wgt.Show( true );
				
				for ( int k = 0; k < 5; k++ )
				{
					wgt.LoadImageFile( k, "set:CustomGUI_1" + " image:icon" + wgt_name + k );
				}
			}
		}
		
		// For SICK, BLEEDISH, FRACTURE, STUFFED, WETNESS icons
		for ( int m = 0; m < m_BadgesWidgetNames.Count(); m++ )
		{
			string badge_name = m_BadgesWidgetNames.GetElement( m );
			int key = m_BadgesWidgetNames.GetKey( m );
			ImageWidget badge_widget;
			Class.CastTo(badge_widget,  m_Badges.FindAnyWidget( badge_name ) );
			
			// Set image
			if ( key == NTFKEY_SICK )
				badge_widget.LoadImageFile( 0, "set:CustomGUI_1" + " image:iconBacteria" );
			
			m_BadgesWidgets.Set( key, badge_widget );
			badge_widget.Show( false );
			m_BadgesWidgetDisplay.Set( key, false );
		}
	}

	override void DisplayTendencyTemp( int key, int tendency, int status )
	{
		ImageWidget w = ImageWidget.Cast( m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );
		TextWidget temp_top = TextWidget.Cast( m_Notifiers.FindAnyWidget( "TemperatureValueTop" ) );
		TextWidget temp_bot = TextWidget.Cast( m_Notifiers.FindAnyWidget( "TemperatureValueBottom" ) );
		//string temp = player..ToString() + "°C";
		float alpha = w.GetAlpha();
		
		if ( tendency < 0 )
		{
			temp_top.Show( true );
			temp_bot.Show( false );
		}
		else
		{
			temp_top.Show( false );
			temp_bot.Show( true );
		}
		
		switch( status )
		{
			case 2:
				//w.SetColor( ARGB( alpha * 255, 220, 220, 0 ) );		//WARNING_PLUS
				m_TendencyStatusCritical.Remove( w );
				w.SetImage( 1 );
				
				break;
			case 3:
				//w.SetColor( ARGB( alpha * 255, 220, 0, 0 ) );		//CRITICAL_PLUS
				m_TendencyStatusCritical.Remove( w );
				w.SetImage( 0 );
				break;
			case 4:
				if ( !m_TendencyStatusCritical.Contains( w ) )		//BLINKING_PLUS
				{
					m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 220, 0, 0 ) );
				}
				w.SetImage( 0 );
				break;
			case 5:
				//w.SetColor( ARGB( alpha * 255, 0, 206, 209 ) );		//WARNING_MINUS
				m_TendencyStatusCritical.Remove( w );
				w.SetImage( 3 );
				break;
			case 6:
				//w.SetColor( ARGB( alpha * 255, 30, 144, 220 ) );	//CRITICAL_MINUS
				m_TendencyStatusCritical.Remove( w );
				w.SetImage( 4 );
				break;
			case 7:													//BLINKING_MINUS
				if ( !m_TendencyStatusCritical.Contains( w ) )
				{
					m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 30, 144, 220 ) );
				}
				w.SetImage( 4 );
				break;				
			default:
				//w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//DEFAULT
				m_TendencyStatusCritical.Remove( w );
				w.SetImage( 2 );
				break;
		}
	}

	override void DisplayTendencyNormal( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );
		
		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();
			
			switch( status )
			{
				case 3:
					//w.SetColor( ARGB( alpha * 255, 220, 220, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					//w.SetColor( ARGB( alpha * 255, 220, 0, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 220, 0, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}	
	}
}