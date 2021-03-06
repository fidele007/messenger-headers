/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBSearchPivotTitleViewDelegate.h>
#import <Messenger/FBSearchPivotViewProtocol.h>

@protocol FBSearchPivotViewDelegate;
@class FBMemGraphSearchQuery, NSString, FBUserSession, FBSearchPivotTitleView, UIView, FBRoundedCornerView, FBPhotoCollageView, UITapGestureRecognizer;

@interface FBSearchPivotView : UIView <FBSearchPivotTitleViewDelegate, FBSearchPivotViewProtocol> {

	FBUserSession* _session;
	FBSearchPivotTitleView* _titleView;
	UIView* _cardView;
	FBRoundedCornerView* _topLeftRoundedCorner;
	FBRoundedCornerView* _topRightRoundedCorner;
	FBPhotoCollageView* _photoCollageView;
	UITapGestureRecognizer* _photoStripTap;
	UITapGestureRecognizer* _backgroundTap;
	id<FBSearchPivotViewDelegate> _delegate;
	FBMemGraphSearchQuery* _pivotQuery;
	NSString* _pivotContext;

}

@property (assign,nonatomic,__weak) id<FBSearchPivotViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMemGraphSearchQuery * pivotQuery;                         //@synthesize pivotQuery=_pivotQuery - In the implementation block
@property (nonatomic,copy) NSString * pivotContext;                                      //@synthesize pivotContext=_pivotContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeConstrainedWithSize:(CGSize)arg1 session:(id)arg2 ;
+(UIEdgeInsets)_contentInsetsWhenInSet;
-(void)_didTapBackground:(id)arg1 ;
-(void)setPivotQuery:(FBMemGraphSearchQuery *)arg1 ;
-(FBMemGraphSearchQuery *)pivotQuery;
-(void)searchPivotTitleView:(id)arg1 didTapEntityWithURL:(id)arg2 ;
-(void)searchPivotTitleViewDidTapBackground:(id)arg1 ;
-(void)_didTapPhotoStrip:(id)arg1 ;
-(void)_configCorners;
-(void)_calculateTitleSizeIfNeeded;
-(NSString *)pivotContext;
-(void)setPivotContext:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBSearchPivotViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBSearchPivotViewDelegate>)delegate;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)initWithSession:(id)arg1 ;
-(void)_updateUI;
@end

