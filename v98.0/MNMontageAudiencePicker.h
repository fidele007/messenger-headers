/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageContactsRetrieverCountsDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>

@protocol FBProvider, MNModalPresentation;
@class MNMontageAudienceManager, NSString;

@interface MNMontageAudiencePicker : NSObject <MNMontageContactsRetrieverCountsDelegate, MNMultiPeoplePickerViewControllerDelegate> {

	unsigned long long _audienceListType;
	id<FBProvider> _montageAudiencePickerViewControllerProvider;
	id<FBProvider> _montageAudienceContactsRetrieverProvider;
	id<MNModalPresentation> _modalPresenter;
	MNMontageAudienceManager* _montageAudienceManager;
	long long _selectedAudienceCount;

}

@property (nonatomic,readonly) long long selectedAudienceCount;              //@synthesize selectedAudienceCount=_selectedAudienceCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didToggleContact:(id)arg2 selected:(BOOL)arg3 ;
-(id)createAudiencePicker;
-(id)initWithMontageAudiencePickerViewControllerProvider:(id)arg1 montageAudienceContactsRetrieverProvider:(id)arg2 montageAudienceManager:(id)arg3 modalPresenter:(id)arg4 audienceListType:(unsigned long long)arg5 ;
-(id)_montageAudienceTitle;
-(void)montageContactsRetriever:(id)arg1 didRetrieveListWithSelectedCount:(long long)arg2 ;
-(long long)selectedAudienceCount;
@end

