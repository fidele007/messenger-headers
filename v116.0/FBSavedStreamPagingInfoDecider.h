/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSavedStreamPagingInfoDeciderDelegate;
@interface FBSavedStreamPagingInfoDecider : NSObject {

	id<FBSavedStreamPagingInfoDeciderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSavedStreamPagingInfoDeciderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)pagingInfoForStream;
-(void)setDelegate:(id<FBSavedStreamPagingInfoDeciderDelegate>)arg1 ;
-(id<FBSavedStreamPagingInfoDeciderDelegate>)delegate;
@end

