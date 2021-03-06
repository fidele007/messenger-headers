/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTextView.h>
#import <Messenger/MNMenuHostResponder.h>

@class UIResponder, NSString;

@interface MNTextViewInternal : FBTextView <MNMenuHostResponder> {

	BOOL _shouldHideCaret;
	unsigned long long _placeholderAlignment;
	UIResponder* _menuResponder;

}

@property (assign,nonatomic,__weak) UIResponder * menuResponder;                          //@synthesize menuResponder=_menuResponder - In the implementation block
@property (assign,nonatomic,__weak) id<MNTextViewInternalDelegate> delegate; 
@property (assign,nonatomic) unsigned long long placeholderAlignment;                     //@synthesize placeholderAlignment=_placeholderAlignment - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCaret;                                        //@synthesize shouldHideCaret=_shouldHideCaret - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(void)setMenuResponder:(UIResponder *)arg1 ;
-(BOOL)shouldHideCaret;
-(void)handleMenuDidHide;
-(BOOL)_isMenuVisible;
-(UIResponder *)menuResponder;
-(void)setPlaceholderAlignment:(unsigned long long)arg1 ;
-(unsigned long long)placeholderAlignment;
-(CGRect)_placeholderRectForPlaceholderAlignment:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)delete:(id)arg1 ;
@end

