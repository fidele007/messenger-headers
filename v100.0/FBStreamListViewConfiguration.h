/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UICollectionViewLayout, UIColor, NSString;

@interface FBStreamListViewConfiguration : FBValueObject <NSCopying> {

	BOOL _useTableView;
	BOOL _hasPullToRefresh;
	BOOL _shouldCancelTouchesWhenScrolling;
	UICollectionViewLayout* _collectionViewLayout;
	UIColor* _scrollViewBackgroundColor;
	UIColor* _pullToRefreshBackgroundColor;
	double _bottomScrollBuffer;
	double _topScrollBuffer;
	NSString* _analyticsModule;
	NSString* _scrollViewAccessibilityIdentifier;

}

@property (nonatomic,readonly) BOOL useTableView;                                              //@synthesize useTableView=_useTableView - In the implementation block
@property (nonatomic,readonly) BOOL hasPullToRefresh;                                          //@synthesize hasPullToRefresh=_hasPullToRefresh - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelTouchesWhenScrolling;                          //@synthesize shouldCancelTouchesWhenScrolling=_shouldCancelTouchesWhenScrolling - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout;                  //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,copy,readonly) UIColor * scrollViewBackgroundColor;                       //@synthesize scrollViewBackgroundColor=_scrollViewBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * pullToRefreshBackgroundColor;                    //@synthesize pullToRefreshBackgroundColor=_pullToRefreshBackgroundColor - In the implementation block
@property (nonatomic,readonly) double bottomScrollBuffer;                                      //@synthesize bottomScrollBuffer=_bottomScrollBuffer - In the implementation block
@property (nonatomic,readonly) double topScrollBuffer;                                         //@synthesize topScrollBuffer=_topScrollBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * scrollViewAccessibilityIdentifier;              //@synthesize scrollViewAccessibilityIdentifier=_scrollViewAccessibilityIdentifier - In the implementation block
-(NSString *)analyticsModule;
-(BOOL)hasPullToRefresh;
-(double)bottomScrollBuffer;
-(double)topScrollBuffer;
-(BOOL)shouldCancelTouchesWhenScrolling;
-(UIColor *)scrollViewBackgroundColor;
-(BOOL)useTableView;
-(NSString *)scrollViewAccessibilityIdentifier;
-(UIColor *)pullToRefreshBackgroundColor;
-(id)initWithUseTableView:(BOOL)arg1 hasPullToRefresh:(BOOL)arg2 shouldCancelTouchesWhenScrolling:(BOOL)arg3 collectionViewLayout:(id)arg4 scrollViewBackgroundColor:(id)arg5 pullToRefreshBackgroundColor:(id)arg6 bottomScrollBuffer:(double)arg7 topScrollBuffer:(double)arg8 analyticsModule:(id)arg9 scrollViewAccessibilityIdentifier:(id)arg10 ;
-(UICollectionViewLayout *)collectionViewLayout;
@end

