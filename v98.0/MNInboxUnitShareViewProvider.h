/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxUnitShareViewDelegate.h>
#import <Messenger/MNInboxUnitViewProviding.h>
#import <Messenger/MNInboxUnitViewConfiguring.h>
#import <Messenger/MNInboxUnitViewTappable.h>

@protocol MNInboxUnitViewTapDelegate;
@class NSString;

@interface MNInboxUnitShareViewProvider : NSObject <MNInboxUnitShareViewDelegate, MNInboxUnitViewProviding, MNInboxUnitViewConfiguring, MNInboxUnitViewTappable> {

	id<MNInboxUnitViewTapDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNInboxUnitViewTapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)viewClassForViewModel:(id)arg1 ;
-(id)viewForViewModel:(id)arg1 ;
-(id)viewModelForView:(id)arg1 ;
-(void)configureView:(id)arg1 withViewModel:(id)arg2 ;
-(CGSize)sizeForViewModel:(id)arg1 collectionViewSize:(CGSize)arg2 ;
-(double)layerZPositionForViewModel:(id)arg1 ;
-(void)inboxUnitShareViewDidTapShareButton:(id)arg1 ;
-(void)setDelegate:(id<MNInboxUnitViewTapDelegate>)arg1 ;
-(id<MNInboxUnitViewTapDelegate>)delegate;
@end

