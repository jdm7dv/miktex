/* Header for module control, generated by p2c 1.21alpha-07.Dec.93 */
#ifndef CONTROL_H
#define CONTROL_H


#ifdef CONTROL_G
# define vextern
#else
# define vextern extern
#endif
/* DPL 2004-03-21 */
/* Controls which M-Tx features are enabled.
   The interface allows one to interrogate the feature state, to set
   features according to the M-Tx level, and to override features given
   the feature name as a character string.
*/


extern void mtxLevel(Char *level);
extern boolean setFeature(Char *which, boolean val);
/* return TRUE means OK, return FALSE means there is no such feature */
extern void printFeatures(boolean anyway);
/* anyway TRUE means print all feature settings, FALSE means only those
   that were set via setFeature */

extern boolean multiFile(void);
extern boolean splitShortcut(void);
extern boolean newWordShortcut(void);
extern boolean doChords(void);
extern boolean doUptext(void);
extern boolean doLyrics(void);
extern boolean unbeamVocal(void);
extern boolean uptextOnRests(void);
extern boolean solfaNoteNames(void);
extern boolean pedanticWarnings(void);
extern boolean ignoreErrors(void);
extern boolean hideBlindSlurs(void);
extern boolean instrumentNames(void);
extern boolean beVerbose(void);
extern boolean debugMode(void);
extern boolean insertDuration(void);
extern boolean rearrangeNote(void);
extern boolean countMacro(void);
extern boolean expandMacro(void);
extern boolean checkPitch(void);


#undef vextern

#endif /*CONTROL_H*/

/* End. */
