/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPopoverOverlayNavigationCoordinatorDelegate;
@class NSMutableArray;

@interface FBPopoverOverlayNavigationCoordinator : NSObject {

	id<FBPopoverOverlayNavigationCoordinatorDelegate> _delegate;
	NSMutableArray* _allPopoverOverlays;

}

@property (nonatomic,readonly) NSMutableArray * allPopoverOverlays;                                          //@synthesize allPopoverOverlays=_allPopoverOverlays - In the implementation block
@property (assign,nonatomic,__weak) id<FBPopoverOverlayNavigationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissAllPopoverOverlays;
-(NSMutableArray *)allPopoverOverlays;
-(void)setDelegate:(id<FBPopoverOverlayNavigationCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPopoverOverlayNavigationCoordinatorDelegate>)delegate;
@end

