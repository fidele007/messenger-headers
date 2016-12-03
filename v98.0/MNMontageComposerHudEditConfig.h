/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNMontageComposerHudEditConfig : FBValueObject <NSCopying> {

	BOOL _editControlsVisible;
	BOOL _artEligible;
	BOOL _saveVisible;
	BOOL _textColorSliderVisible;
	BOOL _changeColorButtonVisible;
	BOOL _textPlaceholderVisible;
	long long _muteButtonState;
	UIColor* _textColorSliderColor;
	long long _trashIconState;
	long long _editMode;

}

@property (nonatomic,readonly) BOOL editControlsVisible;                         //@synthesize editControlsVisible=_editControlsVisible - In the implementation block
@property (nonatomic,readonly) BOOL artEligible;                                 //@synthesize artEligible=_artEligible - In the implementation block
@property (nonatomic,readonly) BOOL saveVisible;                                 //@synthesize saveVisible=_saveVisible - In the implementation block
@property (nonatomic,readonly) long long muteButtonState;                        //@synthesize muteButtonState=_muteButtonState - In the implementation block
@property (nonatomic,readonly) BOOL textColorSliderVisible;                      //@synthesize textColorSliderVisible=_textColorSliderVisible - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColorSliderColor;              //@synthesize textColorSliderColor=_textColorSliderColor - In the implementation block
@property (nonatomic,readonly) BOOL changeColorButtonVisible;                    //@synthesize changeColorButtonVisible=_changeColorButtonVisible - In the implementation block
@property (nonatomic,readonly) BOOL textPlaceholderVisible;                      //@synthesize textPlaceholderVisible=_textPlaceholderVisible - In the implementation block
@property (nonatomic,readonly) long long trashIconState;                         //@synthesize trashIconState=_trashIconState - In the implementation block
@property (nonatomic,readonly) long long editMode;                               //@synthesize editMode=_editMode - In the implementation block
-(id)initWithEditControlsVisible:(BOOL)arg1 artEligible:(BOOL)arg2 saveVisible:(BOOL)arg3 muteButtonState:(long long)arg4 textColorSliderVisible:(BOOL)arg5 textColorSliderColor:(id)arg6 changeColorButtonVisible:(BOOL)arg7 textPlaceholderVisible:(BOOL)arg8 trashIconState:(long long)arg9 editMode:(long long)arg10 ;
-(BOOL)editControlsVisible;
-(BOOL)artEligible;
-(BOOL)saveVisible;
-(long long)muteButtonState;
-(BOOL)textColorSliderVisible;
-(UIColor *)textColorSliderColor;
-(BOOL)changeColorButtonVisible;
-(BOOL)textPlaceholderVisible;
-(long long)trashIconState;
-(long long)editMode;
@end

