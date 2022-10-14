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
		\times 2/3 { a' 4 gis' fis' } e' 8. ( b ) r8  |
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
		\times 2/3 { a' 4 gis' fis' } e' 8. ( b ) r8  |
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
		fis' 8 ( e' dis' 2 ) r8 b  |
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

	\new Lyrics \lyricsto "voz-part" {
		% intro
		" " " " " " " " " " " " " " " " " " " "

		% santo...
		San -- to, __ san -- to, __
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, __ san -- to. __
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

		% santo...
		San -- to, __ san -- to, __
		san -- "to el" Se -- ñor, __
		Dios del u -- ni -- ver -- so.
		San -- to, __ san -- to. __
		El cie -- "lo y" la tie -- rra
		es -- tán lle -- nos de tu san -- ta glo -- ria.

		% benedetto...
		Bien -- a -- ven -- tu -- ra -- "do el" que vie -- ne
		en nom -- bre del Se -- ñor __

		% hosanna...
		Ho -- san -- "na en" lo al -- to del cie -- lo, __
		Ho -- san -- "na en" lo al -- to del cie __ lo.

		% santo...
		San -- to, __ san -- to, __
		san __ to.
	}
>>
