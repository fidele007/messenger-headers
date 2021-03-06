/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>

@class UIToolbar, UIColor, UIImage, NSMutableArray, NSString;

@interface FBPublisherBar_DEPRECATED : UIView <FBAccessibilityInvalidationEventsListener> {

	UIToolbar* _toolbar;
	double _textSize;
	UIColor* _textColor;
	UIColor* _highlightedTextColor;
	UIColor* _textShadowColor;
	UIImage* _separatorImage;
	UIImage* _highlightedSeparatorImage;
	NSMutableArray* _separators;
	NSMutableArray* _buttons;
	NSMutableArray* _merged;
	BOOL _translucent;
	BOOL _hasSideFeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPublisherBarForComposerSource:(id)arg1 composerContentOrigin:(id)arg2 barButtons:(id)arg3 hasSideFeed:(BOOL)arg4 ;
-(double)shadowLocation;
-(void)didReceiveFontInvalidation;
-(id)initWithButtons:(id)arg1 textColor:(id)arg2 highlightedTextColor:(id)arg3 textShadowColor:(id)arg4 textSize:(double)arg5 separatorImage:(id)arg6 highlightedSeparatorImage:(id)arg7 translucent:(BOOL)arg8 hasSideFeed:(BOOL)arg9 ;
-(id)_newSeparatorView;
-(id)_buttonWithBarButton:(id)arg1 ;
-(void)highlightedButton:(id)arg1 ;
-(void)toggleHighlightedForSeparatorAtIndex:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)numberOfButtons;
-(id)buttonAtIndex:(unsigned long long)arg1 ;
@end

