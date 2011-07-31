% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Santo"
	composer = "Gen Rosso/Verde"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*37  %% 1-37
}
globalTempo = {
	\tempo 4 = 96  \skip 1*37
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "santogenrv-acordes.inc"
		\include "santogenrv-soprano.inc"
		\include "santogenrv-mezzo.inc"
		\include "santogenrv-tenor.inc"
		\include "santogenrv-baritono.inc"

	>>

	\layout { }
}
