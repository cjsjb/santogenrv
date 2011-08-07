\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \major

		R1*2
		a' 4. gis' r4  |
		gis' 4. fis' r4  |
%% 5
		\times 2/3 { a' 4 gis' fis' } e' 8. ( b ) r8  |
		cis' 8 e' e' fis' gis' 4 b'  |
		a' 4. gis' r4  |
		gis' 4. fis' r8 b  |
		\times 2/3 { cis' 4 e' fis' } fis' 8. e' e' 16 e'  |
%% 10
		a' 8 gis' fis' e' cis' e' fis' 4  |
		e' 2. r8 b 8  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { dis' cis' b }  |
		\times 2/3 { cis' 4 cis' 2 ~ } cis' 4 \times 2/3 { r8 cis' 4 }  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { fis' e' fis' }  |
%% 15
		gis' 4 ( a' ) b' 2  |
		a' 4. gis' r4  |
		gis' 4. fis' r4  |
		\times 2/3 { a' 4 gis' fis' } e' 8. ( b ) r8  |
		cis' 8 e' e' fis' gis' 4 b'  |
%% 20
		a' 4. gis' r4  |
		gis' 4. fis' r8 b  |
		\times 2/3 { cis' 4 e' fis' } fis' 8. e' e' 16 e'  |
		a' 8 gis' fis' e' cis' e' fis' 4  |
		e' 2. r4  |
%% 25
		\times 2/3 { r4 fis' fis' } \times 2/3 { fis' e' dis' }  |
		\times 2/3 { cis' 4 e' e' ~ } e' 8 dis' r cis'  |
		b 4 gis' gis' fis' 8 fis' ( ~ 
		% warning: overlong bar truncated here |
		fis' 8 e' dis' 2 ) r8 b 8  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { dis' cis' b }  |
%% 30
		\times 2/3 { cis' 4 cis' 2 ~ } cis' 4 \times 2/3 { r8 cis' 4 }  |
		\times 2/3 { e' 4 e' e' } \times 2/3 { fis' e' fis' }  |
		gis' 4 ( a' ) b' 2  |
		a' 4. gis' r4  |
		gis' 4. fis' r4  |
%% 35
		\times 2/3 { a' 4 ( gis' fis' } e' 2 )  |
		e' 1  |
		\bar "|."
		}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		% santo...
		San -- to, san -- to,
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, san -- to.
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

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
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

		% santo...
		San -- to, san -- to,
		san __ to.
	}
>>
