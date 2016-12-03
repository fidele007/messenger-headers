/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadCollectionProfileImageViewDelegate.h>
#import <Messenger/MNHorizontalScrollInboxUnitViewListening.h>

@protocol MNThreadCollectionControllerDelegate;
@class MNProfileImageViewController, NSString;

@interface MNThreadCollectionController : NSObject <MNThreadCollectionProfileImageViewDelegate, MNHorizontalScrollInboxUnitViewListening> {

	MNProfileImageViewController* _profileImageViewController;
	id<MNThreadCollectionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadCollectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfileImageViewController:(id)arg1 ;
-(void)viewWillAppear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidDisappear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidTap:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidHighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidUnhighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewModelsWillAppear:(id)arg1 ;
-(void)viewModelsWillDisappear:(id)arg1 ;
-(void)viewAnimationDidStop:(id)arg1 withViewModel:(id)arg2 ;
-(void)profileImageViewDidHide:(id)arg1 ;
-(void)profileImageViewDidHideAll:(id)arg1 ;
-(void)setDelegate:(id<MNThreadCollectionControllerDelegate>)arg1 ;
-(id<MNThreadCollectionControllerDelegate>)delegate;
@end

