/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNGrowingTextViewDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewTableSectionControlling.h>

@protocol MNGroupsRoomCreateViewFBShareSectionControllerDelegate, MNGroupsRoomCreateViewTableSectionUpdating;
@class MNGrowingTextView, NSOrderedSet, NSString;

@interface MNGroupsRoomCreateViewFBShareSectionController : NSObject <MNGrowingTextViewDelegate, MNGroupsRoomCreateViewTableSectionControlling> {

	MNGrowingTextView* _fbShareCustomMessageTextField;
	BOOL _showsCustomMessageRow;
	NSOrderedSet* _orderedRows;
	id<MNGroupsRoomCreateViewFBShareSectionControllerDelegate> _delegate;
	id<MNGroupsRoomCreateViewTableSectionUpdating> _sectionUpdateDelegate;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewFBShareSectionControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewTableSectionUpdating> sectionUpdateDelegate;              //@synthesize sectionUpdateDelegate=_sectionUpdateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_rowTypeAtIndex:(long long)arg1 ;
-(void)_customizeCellForShareSetting:(id)arg1 roomSummary:(id)arg2 ;
-(void)_customizeCellForCustomMessage:(id)arg1 ;
-(void)_didTapShareOnFB:(id)arg1 ;
-(id<MNGroupsRoomCreateViewTableSectionUpdating>)sectionUpdateDelegate;
-(void)setSectionUpdateDelegate:(id<MNGroupsRoomCreateViewTableSectionUpdating>)arg1 ;
-(id)cellReuseIdentifierForIndexPath:(id)arg1 ;
-(double)cellHeightForRoomSummary:(id)arg1 atIndexPath:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withRoomSummary:(id)arg3 ;
-(void)didSelectCellAtIndexPath:(id)arg1 ;
-(void)resetCellController;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 ;
-(BOOL)growingTextViewShouldReturn:(id)arg1 ;
-(void)setDelegate:(id<MNGroupsRoomCreateViewFBShareSectionControllerDelegate>)arg1 ;
-(id)init;
-(id<MNGroupsRoomCreateViewFBShareSectionControllerDelegate>)delegate;
-(long long)numberOfRows;
@end

