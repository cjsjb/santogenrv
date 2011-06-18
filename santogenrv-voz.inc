\context Staff = "voz" \with { \consists Ambitus_engraver } <<
	%\set Staff.instrumentName = "Voz"
	%\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-part" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\time 4/4
		\key e \major

		r2. r8 b  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { fis' e' fis' }  |
		gis' 4 a' b' 2  |
		a' 4. gis' 8 ~ gis' 4 r  |
%% 5
		gis' 4. fis' 8 ~ fis' 4 r  |
		\times 2/3 { a' 4 gis' fis' } e' 8. b r8  |
		cis' 8 e' e' fis' gis' 4 b'  |
		a' 4. gis' 8 ~ gis' 4 r  |
		gis' 4. fis' 8 ~ fis' 4 r8 b  |
%% 10
		\times 2/3 { cis' 4 e' fis' } e' 8. e' e' 16 e'  |
		a' 8 gis' fis' e' cis' e' fis' 4  |
		e' 2. r8 b  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { dis' cis' b }  |
		\times 2/3 { cis' 4 cis' 2 ~ } cis' 4 r8 cis'  |
%% 15
		\times 2/3 { e' 4 e' e' } \times 2/3 { fis' e' fis' }  |
		gis' 4 ( a' ) b' 2  |
		a' 4. gis' 8 ~ gis' 4 r  |
		gis' 4. fis' 8 ~ fis' 4 r  |
		\times 2/3 { a' 4 gis' fis' } e' 8. b r8  |
%% 20
		cis' 8 e' e' fis' gis' 4 b'  |
		a' 4. gis' 8 ~ gis' 4 r  |
		gis' 4. fis' 8 ~ fis' 4 r8 b  |
		\times 2/3 { cis' 4 e' fis' } e' 8. e' e' 16 e'  |
		a' 8 gis' fis' e' cis' e' fis' 4  |
%% 25
		e' 2. r4  |
		\times 2/3 { r4 fis' fis' } \times 2/3 { fis' e' dis' }  |
		\times 2/3 { cis' 4 e' e' ~ } e' 8 dis' r cis'  |
		b 4 gis' gis' fis' 8 fis' ~  |
		fis' 8 e' ( dis' 2 ) r8 b  |
%% 30
		\times 2/3 { e' 4 e' e' } \times 2/3 { dis' cis' b }  |
		\times 2/3 { cis' 4 cis' 2 ~ } cis' 4 r8 cis'  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { fis' e' fis' }  |
		gis' 4 ( a' ) b' 2  |
		a' 4. gis' 8 ~ gis' 4 r  |
%% 35
		gis' 4. fis' 8 ~ fis' 4 r  |
		\times 2/3 { a' 4 ( gis' fis' } e' 2 )  |
		e' 1  |
		\bar "|."
	}

	\lyricsto "voz-part" \new Lyrics \lyricmode {
		% intro
		" " " " " " " " " " " " " " " " " " " "

		% santo...
		San -- to, __ san -- to, __
		san -- "to il" Si -- gno -- re,
		Dio del -- l'u -- ni -- ver -- so.
		San -- to, __ san -- to. __
		I cie -- "li e" la ter -- ra
		so -- no pie -- ni del -- la tu -- a glo -- ria.

		% osanna...
		O -- san -- na nel -- l'al -- to dei cie -- li, __
		O -- san -- na nel -- l'al -- to dei cie __ li.

		% santo...
		San -- to, __ san -- to, __
		san -- "to il" Si -- gno -- re,
		Dio del -- l'u -- ni -- ver -- so.
		San -- to, __ san -- to. __
		I cie -- "li e" la ter -- ra
		so -- no pie -- ni del -- la tu -- a glo -- ria.

		% benedetto...
		Be -- ne -- det -- to -- Co -- lui che -- vie -- ne
		nel no -- me del Si -- gno -- re. __

		% osanna...
		O -- san -- na nel -- l'al -- to dei cie -- li, __
		O -- san -- na nel -- l'al -- to dei cie __ li.

		% santo...
		San -- to, __ san -- to, __
		san __ to.
	}
>>
