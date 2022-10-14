\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \major

		R1*4  |
%% 5
		r4 cis' 8 ( d' 4. ) cis' 4  |
		e 1  |
		r4 cis' 8 ( d' 4. ) cis' 4  |
		e' 1  |
		r4 cis' 8 ( d' 4. ) cis' 4  |
%% 10
		e 1  |
		r4 cis' 8 ( d' 4. ) cis' 4  |
		e' 1  |
		R1  |
		cis' 4. ( b ) a 4  |
%% 15
		cis' 1  |
		cis' 4. ( b ) a 4  |
		e' 1 ~  |
		e' 2. r4  |
		R1  |
%% 20
		cis' 4. ( b ) a 4 ~  |
		a 1  |
		R1*2  |
		cis' 4. ( b ) a 4  |
%% 25
		d' 1  |
		R1*2  |
		r2 r4 a  |
		e' 1 (  |
%% 30
		f' 1  |
		fis' 2. e' 4  |
		dis' 2. ) r4  |
		cis' 2 ~ cis' 8 cis' cis' 4  |
		b 2 ~ b 8 cis' b 4  |
%% 35
		cis' 1  |
		R1*4  |
%% 40
		cis' 4. ( b ) a 4  |
		cis' 1  |
		cis' 4. ( b ) a 4  |
		e' 1 ~  |
		e' 2. r4  |
%% 45
		R1  |
		cis' 4. b a 4 ~  |
		a 1  |
		R1*2  |
%% 50
		cis' 4. b a 4  |
		d' 1  |
		R1*3  |
%% 55
		e' 1 (  |
		f' 1  |
		fis' 2. e' 4  |
		dis' 2. ) r4  |
		cis' 2 ~ cis' 8 cis' cis' 4  |
%% 60
		b 2 ~ b 8 ( cis' ) b 4  |
		cis' 1  |
		R1*3  |
%% 65
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
		e' 2 ~ e' 8 ( fis' ) e' 4  |
		cis' 1  |
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

	\new Lyrics \lyricsto "voz-mezzo" {
		Nic'ht si -- lént,
		nic'ht per -- sant,
		nic'ht si -- lént,
		nic'ht per -- sant.

		Nic'ht si -- lént,
		nic'ht per -- sant, __
		"...bri" -- txind...
		"...es" __ fi -- glheu...
		"...ten" -- dreu... __
		dor -- metz cüm -- bién ce -- les -- tial.

		Nic'ht si -- lént,
		nic'ht per -- sant, __
		"...àl" visch -- ta...
		"...vient" glo -- ri -- a...
		Ah... __
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
