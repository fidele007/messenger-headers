/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, UIScrollView;

@interface FBContentInsetTrackerWeak : NSObject {

	NSMutableDictionary* _adjustmentContributions;
	NSMutableDictionary* _scrollIndicatorAdjustmentContributions;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsetAdjustment; 
@property (nonatomic,readonly) UIEdgeInsets scrollIndicatorInsetAdjustment; 
-(void)setContentAndScrollIndicatorInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)setScrollIndicatorInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(UIEdgeInsets)contentInsetAdjustment;
-(void)removeContentAndScrollIndicatorInsetForKey:(id)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsetAdjustment;
-(UIEdgeInsets)_insetsInDictionary:(id)arg1 forKey:(id)arg2 ;
-(UIEdgeInsets)contentInsetForKey:(id)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsetForKey:(id)arg1 ;
-(void)removeContentInsetForKey:(id)arg1 ;
-(void)removeScrollIndicatorInsetForKey:(id)arg1 ;
-(UIEdgeInsets)_sumInsetsInDictionary:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
@end

