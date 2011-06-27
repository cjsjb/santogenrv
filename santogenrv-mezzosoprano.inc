\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \major

		R1*3 
		cis' 4. b r4  |
%% 5
		e' 4. dis' r4  |
		\times 2/3 { cis' 4 b a } b 4. r8  |
		a 8 b b b b 4 fis'  |
		cis' 4. b r4  |
		e' 4. dis' r8 b  |
%% 10
		\times 2/3 { cis' 4 e' fis' } fis' 8. e' e' 16 e'  |
		a' 8 gis' fis' e' cis' e' cis' 4  |
		b 2. r8 b 8  |
		\times 2/3 { cis' 4 cis' cis' } \times 2/3 { b a gis }  |
		\times 2/3 { a 4 a 2 ~ } a 4 \times 2/3 { r8 a 4 }  |
%% 15
		\times 2/3 { cis' 4 cis' cis' } \times 2/3 { dis' cis' dis' }  |
		e' 4 ( fis' ) e' 2  |
		cis' 4. b r4  |
		e' 4. dis' r4  |
		\times 2/3 { cis' 4 b a } b 4. r8  |
%% 20
		a 8 b b b b 4 fis'  |
		cis' 4. b r4  |
		e' 4. dis' r8 b  |
		\times 2/3 { cis' 4 e' fis' } fis' 8. e' e' 16 e'  |
		a' 8 gis' fis' e' cis' e' cis' 4  |
%% 25
		b 2. r4  |
		\times 2/3 { r4 fis' fis' } \times 2/3 { fis' e' dis' }  |
		\times 2/3 { cis' 4 e' e' ~ } e' 8 dis' r cis'  |
		b 4 gis' gis' fis' 8 fis' ( ~ 
		% warning: overlong bar truncated here |
		fis' 8 e' dis' 2 ) r8 b 8  |
%% 30
		\times 2/3 { cis' 4 cis' cis' } \times 2/3 { b a gis }  |
		\times 2/3 { a 4 a 2 ~ } a 4 \times 2/3 { r8 a 4 }  |
		\times 2/3 { cis' 4 cis' cis' } \times 2/3 { dis' cis' dis' }  |
		e' 4 ( fis' ) e' 2  |
		cis' 4. b r4  |
%% 35
		e' 4. dis' r4  |
		e' 2 ( cis' )  |
		b 1  |
		\bar "|."
		}

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor,
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor,
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% benedetto...
		Bien -- a -- ven -- tu -- ra -- "do el" que vie -- ne
		en nom -- bre del Se -- ñor. __

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

		% santo...
		San -- to, san -- to,
		san __ to.
	}
>>
