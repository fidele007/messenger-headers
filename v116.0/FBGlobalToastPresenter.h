/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBToastPresentationListener.h>
#import <Messenger/FBToastPresenting.h>

@class FBToastQueue, FBToastPresentationListenerAnnouncer, NSMutableArray, FBToastPresenter, NSString;

@interface FBGlobalToastPresenter : NSObject <FBToastPresentationListener, FBToastPresenting> {

	FBToastQueue* _toastQueue;
	FBToastPresentationListenerAnnouncer* _announcer;
	NSMutableArray* _delayedToastChanges;
	FBToastPresenter* _presenter;

}

@property (nonatomic,retain) FBToastPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideToast:(id)arg1 animated:(BOOL)arg2 ;
-(void)toastWillAppear:(id)arg1 ;
-(void)toastWillDisappear:(id)arg1 ;
-(void)presenter:(id)arg1 didAcceptToast:(id)arg2 ;
-(void)presenter:(id)arg1 didRelinquishToast:(id)arg2 ;
-(id)initWithQueuedToastComparator:(/*^block*/id)arg1 ;
-(void)setPresenter:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(FBToastPresenter *)presenter;
-(void)setPresenter:(FBToastPresenter *)arg1 ;
@end

