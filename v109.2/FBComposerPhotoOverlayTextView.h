/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayView.h>
#import <Messenger/FBComposerPhotoOverlayViewProtocol.h>

@class NSString, UIFont, UIColor, FBComposerTextOnPhoto;

@interface FBComposerPhotoOverlayTextView : FBComposerPhotoOverlayView <FBComposerPhotoOverlayViewProtocol> {

	double _fontSize;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	FBComposerTextOnPhoto* _textOnPhoto;

}

@property (nonatomic,readonly) FBComposerTextOnPhoto * textOnPhoto;              //@synthesize textOnPhoto=_textOnPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composerPhotoOverlayTextViewFromTextOnPhoto:(id)arg1 ;
-(void)setTransformUsingScale:(double)arg1 rotationAngle:(double)arg2 beginningTransform:(CGAffineTransform)arg3 ;
-(void)adjustForScale:(double)arg1 rotationAngle:(double)arg2 beginningTransform:(CGAffineTransform)arg3 ;
-(id)initWithTextOnPhoto:(id)arg1 ;
-(CGSize)_sizeOfTextForWidth:(double)arg1 ;
-(void)adjustFontSize;
-(void)_recreateTextOnPhoto;
-(Class)photoOverlayAttachmentGestureHandlerClass;
-(FBComposerTextOnPhoto *)textOnPhoto;
-(id)contentView;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
@end

