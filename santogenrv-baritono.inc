\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \major

		R1*2
                e 4. e r4  |
                e 8 ( a 4 ) b 4. r4  |
%% 5
                \times 2/3 { fis 4 fis fis } gis 4. r8  |
                a 8 a a a a 4 b  |
                e 4. e r4  |
                e 8 ( a 4 ) b 4. r8 b  |
                \times 2/3 { fis 4 fis fis } gis 8. gis r8  |
%% 10
                cis 8 e e e a gis fis 4  |
                e 2. r4  |
                R1  |
                r2. \times 2/3 { r8 e 4 }  |
                \times 2/3 { e 4 e 2 ~ } e 4 r  |
%% 15
                b 2 a  |
                b 4. e r4  |
                e 8 ( a 4 ) b 4. r4  |
                \times 2/3 { fis 4 fis fis } gis 4. r8  |
                a 8 a a a a 4 b  |
%% 20
                e 4. e r4  |
                e 8 ( a 4 ) b 4. r8 b  |
                \times 2/3 { fis 4 fis fis } gis 8. gis r8  |
                cis 8 e e e a gis fis 4  |
                e 2. r4  |
%% 25
                \times 2/3 { r4 fis fis } \times 2/3 { fis e dis }  |
                \times 2/3 { cis 4 e e ~ } e 8 dis r cis  |
                b, 4 gis gis fis 8 fis ( ~ 
                % warning: overlong bar truncated here |
                fis 8 e dis 2 ) r4  |
                R1  |
%% 30
                r2 r4 \times 2/3 { r8 e 4 }  |
                \times 2/3 { e 4 e 2 ~ } e 4 r  |
                b 2 a  |
                b 4. e r4  |
                e 8 ( a 4 ) b 4. r4  |
%% 35
                cis' 2 ( b )  |
                e 1  |
		\bar "|."
		}

	\new Lyrics \lyricsto "voz-baritono" {
		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra...
		"...lle" -- nos de tu san -- ta glo -- ria.

		% hosanna...
		Ho -- san -- na... __
		"...cie" -- lo.

		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra...
		"...lle" -- nos de tu san -- ta glo -- ria.

		% benedetto...
		Bien -- a -- ven -- tu -- ra -- "do el" que vie -- ne
		en nom -- bre del Se -- ñor. __

		% hosanna...
		Ho -- san -- na... __
		"...cie" -- lo.

		% santo...
		San -- to, san -- to,
		san __ to.
	}
>>
