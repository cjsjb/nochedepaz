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
		r4 e' 8 fis' 4. a' 8 a' ~  |
		a' 1  |
		r4 e' 8 fis' 4. a' 8 a' ~  |
		a' 1  |
%% 10
		r4 e' 8 fis' 4. a' 8 a' ~  |
		a' 1  |
		R1  |
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
%% 15
		e' 2 ~ e' 8 fis' e' 4  |
		a' 1  |
		b' 2. b' 4  |
		gis' 2. gis' 4  |
		a' 2. a' 4  |
%% 20
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
%% 25
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
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
		e' 2 ~ e' 8 fis' e' 4  |
%% 40
		cis' 1  |
		e' 2 ~ e' 8 fis' e' 4  |
		a' 1  |
		b' 2. b' 4  |
		gis' 2. gis' 4  |
%% 45
		a' 2. a' 4  |
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 ~ fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
%% 50
		cis' 1  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
%% 55
		b' 2 ~ b' 8 b' b' 4  |
		d'' 2 ~ d'' 8 b' gis' 4  |
		a' 1  ( |
		cis'' 2. ~ cis'' 8 ) r  |
		a' 2 ~ a' 8 e' cis' 4  |
%% 60
		e' 2 ~ e' 8 d' b 4  |
		a 1  |
		R1*3  |
%% 65
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
		e' 2 ~ e' 8 fis' e' 4  |
		a' 1  |
		b' 2. b' 4  |
%% 70
		gis' 2. gis' 4  |
		a' 2. a' 4  |
		e' 2. ~ e' 8 r  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
%% 75
		e' 2 ~ e' 8 fis' e' 4  |
		cis' 1  |
		fis' 2 ~ fis' 8 fis' fis' 4  |
		a' 2 ~ a' 8 gis' fis' 4  |
		e' 2 ~ e' 8 fis' e' 4  |
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

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		No -- che de paz, __
		no -- che "de a" -- mor, __
		no -- che de paz. __

		No -- che de paz,
		no -- che "de a" -- mor,
		to -- do duer -- "me en" -- de -- rre -- dor.
		En -- tre los as -- tros "que es" -- par -- cen su luz,
		vie -- "ne a" -- nun -- cian -- "do al" ni -- ñi -- to Je -- sús.
		Bri -- lla "la es" -- tre -- lla de paz, __
		bri -- lla "la es" -- tre -- lla "de a" -- mor.

		No -- che de paz,
		no -- che "de a" -- mor,
		to -- do duer -- "me en" -- de -- rre -- dor.
		Só -- lo ve -- lan en "la os" -- cu -- ri -- dad
		los pas -- tor -- ci -- llos "que en" el cam -- "po es" -- tán.
		Bri -- lla "la es" -- tre -- lla de paz, __
		bri -- lla "la es" -- tre -- lla "de a" -- mor.

		No -- che de paz,
		no -- che "de a" -- mor,
		to -- do duer -- "me en" -- de -- rre -- dor.
		Mien -- tras los as -- tros es -- par -- cen su luz,
		vie -- "ne a" -- nun -- cian -- "do al" ni -- ñi -- to Je -- sús.
		Glo -- ria al rey ce -- les -- tial, __
		glo -- ria al rey ce -- les -- tial.
	}
>>
