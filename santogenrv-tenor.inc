\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \major

		R1*2
                e' 4. e' r4  |
                b 8 ( cis' e' ) dis' 4 ( cis' 16 b ) r4  |
%% 5
                \times 2/3 { e' 4 e' e' } e' 4. r8  |
                e' 8 e' e' e' e' 4 dis'  |
                e' 4. e' r4  |
                b 8 ( cis' e' ) dis' 8. ( cis' 16 b 8 ) r b  |
                \times 2/3 { a 4 a a } b 8. b b 16 b  |
%% 10
                b 8 b b b b b a 4  |
                gis 2. r4  |
                r2. \times 2/3 { r8 b 4 }  |
                \times 2/3 { cis' 4 cis' cis' } \times 2/3 { b a gis }  |
                \times 2/3 { a 4 a 2 ~ } a 4 r  |
%% 15
                e' 4 ( e' ) e' 2  |
                e' 4. e' r4  |
                b 8 ( cis' e' ) dis' 4 ( cis' 16 b ) r4  |
                \times 2/3 { e' 4 e' e' } e' 4. r8  |
                e' 8 e' e' e' e' 4 dis'  |
%% 20
                e' 4. e' r4  |
                b 8 ( cis' e' ) dis' 8. ( cis' 16 b 8 ) r b  |
                \times 2/3 { a 4 a a } b 8. b b 16 b  |
                b 8 b b b b b a 4  |
                gis 2. r4  |
%% 25
                \times 2/3 { r4 fis' fis' } \times 2/3 { fis' e' dis' }  |
                \times 2/3 { cis' 4 e' e' ~ } e' 8 dis' r cis'  |
                b 4 gis' gis' fis' 8 fis' ( ~ 
                % warning: overlong bar truncated here |
                fis' 8 e' dis' 2 ) r4  |
                r2 r4 \times 2/3 { r8 b 4 }  |
%% 30
                \times 2/3 { cis' 4 cis' cis' } \times 2/3 { b a gis }  |
                \times 2/3 { a 4 a 2 ~ } a 4 r  |
                e' 4 ( e' ) e' 2  |
                e' 4. e' r4  |
                b 8 ( cis' e' ) dis' 4 ( cis' 16 b ) r4  |
%% 35
                \times 2/3 { a 4 ( b b } a 2 )  |
                gis 1  |
		\bar "|."
		}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo... __
		"...cie" __ lo.

		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% benedetto...
		Bien -- a -- ven -- tu -- ra -- "do el" que vie -- ne
		en nom -- bre del Se -- ñor. __

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo... __
		"...cie" __ lo.

		% santo...
		San -- to, san -- to,
		san __ to.
	}
>>
