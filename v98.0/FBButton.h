/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@class NSMutableDictionary, _FBButtonDerivedStyle, UIColor, NSString;

@interface FBButton : UIButton <FBUIConfigurable, FBUIThreadSafeSizable> {

	NSMutableDictionary* _backgroundColorStates;
	NSMutableDictionary* _borderColorStates;
	_FBButtonDerivedStyle* _derivedStyle;
	UIColor* _dimmedBackgroundColor;
	UIColor* _hoverBackgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)buttonWithStyle:(unsigned long long)arg1 glyphName:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
+(id)buttonWithStyle:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
+(id)defaultFBUIConfig;
+(id)_imageForConfig:(id)arg1 derivedStyle:(id)arg2 state:(unsigned long long)arg3 ;
+(CGSize)_threadSafeSizeThatFits:(id)arg1 derivedStyle:(id)arg2 size:(CGSize)arg3 title:(id)arg4 titleFont:(id)arg5 image:(id)arg6 ;
+(double)_extraWidthForConfig:(id)arg1 ;
+(double)_heightForConfig:(id)arg1 ;
+(BOOL)_buttonShouldBeOutline:(unsigned long long)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_updateBackgroundColorForConfig:(id)arg1 ;
-(id)_configBackgroundColorForState:(unsigned long long)arg1 ;
-(id)_configTitleColorForState:(unsigned long long)arg1 ;
-(void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_configureImageViewAndTitleFrameWithContentRect:(CGRect)arg1 imageRect:(CGRect)arg2 titleRect:(CGRect)arg3 extraWidth:(double)arg4 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)config;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)applyConfig:(id)arg1 ;
@end

