/* KABubbleWindowView.h from Colloquy (colloquy.info).
 * Modified for CocoaDialog (cocoadialog.sf.net).
 * I think they got this from an old version of Growl (growl.info).
 */
@interface KABubbleWindowView : NSView {
	bool _clickd;
	NSImage *_icon;
	NSString *_title;
	NSAttributedString *_text;
	SEL _action;
	id _target;
	float _darkColorFloat[4];   // Cache these rather than
	float _lightColorFloat[4];  // calculating over and over.
	NSColor *_darkColor;
	NSColor *_lightColor;
	NSColor *_textColor;
	NSColor *_borderColor;
}
- (void) setIcon:(NSImage *) icon;
- (void) setTitle:(NSString *) title;
- (void) setAttributedText:(NSAttributedString *) text;
- (void) setText:(NSString *) text;

- (void) setDarkColor:(NSColor *)color;
- (void) setLightColor:(NSColor *)color;
- (void) setTextColor:(NSColor *)color;
- (void) setBorderColor:(NSColor *)color;
- (const float *) darkColorFloat; // returns { r, g, b, a }
- (const float *) lightColorFloat; // returns { r, g, b, a }
- (NSColor *) darkColor;
- (NSColor *) lightColor;
- (NSColor *) textColor;
- (NSColor *) borderColor;

- (id) target;
- (void) setTarget:(id) object;

- (SEL) action;
- (void) setAction:(SEL) selector;

@end
