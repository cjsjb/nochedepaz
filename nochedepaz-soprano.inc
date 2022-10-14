\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \major

		R1*5  |
		r4 e' 8 ( fis' 4. ) a' 8 a' ~  |
		a' 1  |
		r4 e' 8 ( fis' 4. ) a' 8 a' ~  |
		a' 1  |
%% 10
		r4 e' 8 ( fis' 4. ) a' 8 a' ~  |
		a' 1  |
		R1  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
%% 15
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		a' 1  |
		b' 2. b' 4  |
		gis' 2. ~ gis' 4  |
		a' 2. a' 4  |
%% 20
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
%% 25
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
		b' 2 ~ b' 8 b' b' 4  |
%% 30
		d'' 2 ~ d'' 8 b' gis' 4  |
		a' 1 ( |
		cis'' 2. ~ cis'' 8 ) r  |
		a' 2 ~ a' 8 e' cis' 4  |
		e' 2 ~ e' 8 d' b 4  |
%% 35
		a 1  |
		R1*3  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
%% 40
		cis' 1  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		a' 1  |
		b' 2. b' 4  |
		gis' 2 ~ gis' 8 gis' 8 gis' 4  |
%% 45
		a' 2. a' 4  |
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 ( gis' fis' 4 )  |
		e' 2 ~ e' 8 fis' e' 4  |
%% 50
		cis' 1  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
%% 55
		b' 2 ~ b' 8 b' b' 4  |
		d'' 2 ~ d'' 8 ( b' ) gis' 4  |
		a' 1  ( |
		cis'' 2. ~ cis'' 8 ) r  |
		a' 2 ~ a' 8 e' cis' 4  |
%% 60
		e' 2 ~ e' 8 ( d' ) b 4  |
		a 1  |
		R1*3  |
%% 65
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		a' 1  |
		b' 2. b' 4  |
%% 70
		gis' 2. gis' 4  |
		a' 2 ~ a' 8 a' 8 a' 4  |
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
%% 75
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 ( fis' e' 4 )  |
%% 80
		cis' 1  |
		b' 2 ~ b' 8 b' b' 4  |
		d'' 2 ~ d'' 8 b' gis' 4  |
		a' 1 ( |
		cis'' 2. ~ cis'' 8 ) r  |
%% 85
		a' 2 ~ a' 8 e' cis' 4  |
		e' 2 ~ e' 8 d' b 4  |
		a 1  |
		R1*4  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		Nic'ht si -- lént, __
		nic'ht per -- sant, __
		nic'ht si -- lént. __

		Nic'ht si -- lent,
		nic'ht per -- sant,
		Cau -- mi -- tà, toct bri -- txind.
		Cir -- ca vier -- xha -- ma -- tra es __ fi -- glheu,
		in -- fint per -- sant, bli -- dour es __ ten -- dreu.
		Dor -- metz in päx ce -- les -- tial, __
		dor -- metz cüm -- bién ce -- les -- tial.

		Nic'ht si -- lent,
		nic'ht per -- sant,
		pas -- tours pa -- vi -- tent àl visch -- ta.
		Da çéu pro -- cul __ vient glo -- ri -- a
		Áin -- xhells can -- ti -- tent Al -- le -- lu -- i -- a;
		C'hrí -- ost Sal -- viour __ nas -- cat;
		C'hrí -- ost Sal -- viour __ nas -- cat.

		Nic'ht si -- lent,
		nic'ht schve -- teu,
		figlh' da Dí -- eu, a -- gap sè féu.
		Rais ra -- di -- inds da Tu fa __ ça sant
		L'al -- vo -- ra -- da da mer -- þé __ des
		Ie -- su, Dom -- nul da tza -- ra, __
		Ie -- su, Dom -- nul da tza -- ra.
	}
>>
