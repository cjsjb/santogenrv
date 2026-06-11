\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Santo...
	\mark \default
	\skip 1*4
	\skip 1*5

	% Hosanna en lo alto del Cielo...
	\mark \default
	\skip 1*4

	% Santo...
	\mark \default
	\skip 1*4
	\skip 1*5

	% Bienaventurado...
	\mark \default
	\skip 1*4

	% Hosanna en lo alto del Cielo...
	\mark \default
	\skip 1*4

	% Santo...
	\mark \default
	%\skip 1*4
}
