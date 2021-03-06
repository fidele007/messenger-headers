/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPollTypeTimePickerViewDataSourceDelegate.h>

@protocol MNPollTypeTimePickerViewControllerDelegate;
@class MNPollTypeTimePickerView, MNPollTypeTimePickerViewDataSource, NSArray, NSString;

@interface MNPollTypeTimePickerViewController : UIViewController <MNPollTypeTimePickerViewDataSourceDelegate> {

	MNPollTypeTimePickerView* _timePickerView;
	MNPollTypeTimePickerViewDataSource* _timePickerDataSource;
	NSArray* _timeOptionTitles;
	NSArray* _selectedDates;
	id<MNPollTypeTimePickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPollTypeTimePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCreateButton;
-(id)initWithSelectedDates:(id)arg1 ;
-(void)didTapAddTimeForDate:(id)arg1 ;
-(void)didUpdateTimeOptionTitles:(id)arg1 ;
-(void)setDelegate:(id<MNPollTypeTimePickerViewControllerDelegate>)arg1 ;
-(id<MNPollTypeTimePickerViewControllerDelegate>)delegate;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end

