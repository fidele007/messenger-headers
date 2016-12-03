/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIView, FBTimer;

@interface FBTabBarBlingAnimation : NSObject {

	NSString* _bookmarkID;
	UIView* _overlayView;
	/*^block*/id _completionBlock;
	/*^block*/id _removeBlingAnimatedBlock;
	FBTimer* _slideAndfadeOutTimer;

}

@property (nonatomic,copy,readonly) NSString * bookmarkID;                //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                      //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id removeBlingAnimatedBlock;                   //@synthesize removeBlingAnimatedBlock=_removeBlingAnimatedBlock - In the implementation block
@property (nonatomic,retain) FBTimer * slideAndfadeOutTimer;              //@synthesize slideAndfadeOutTimer=_slideAndfadeOutTimer - In the implementation block
-(id)initWithBookmarkID:(id)arg1 overlayView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)removeBlingAnimatedBlock;
-(void)setRemoveBlingAnimatedBlock:(id)arg1 ;
-(FBTimer *)slideAndfadeOutTimer;
-(void)setSlideAndfadeOutTimer:(FBTimer *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)bookmarkID;
-(UIView *)overlayView;
@end

