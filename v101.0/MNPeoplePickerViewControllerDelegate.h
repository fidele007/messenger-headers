/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeoplePickerViewControllerDelegate <NSObject>
@optional
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2;
-(void)peoplePicker:(id)arg1 didPickGroup:(id)arg2;
-(void)peoplePicker:(id)arg1 didPickContact:(id)arg2;
-(void)peoplePickerDidShowSearchResults:(id)arg1;
-(void)peoplePickerDidHideSearchResults:(id)arg1;
-(void)peoplePickerTokenFieldWillBecomeResponder:(id)arg1;
-(void)peoplePickerTokenFieldWillResignFirstResponder:(id)arg1;
-(void)peoplePicker:(id)arg1 didFetchSections:(id)arg2;
-(void)peoplePickerTokenFieldDidResize:(id)arg1;
-(void)peoplePicker:(id)arg1 didShowSuggestedContactsForConfiguration:(id)arg2;

@required
-(id)analyticsModuleForPeoplePicker:(id)arg1;
-(BOOL)peoplePicker:(id)arg1 shouldSelectContact:(id)arg2;
-(void)peoplePicker:(id)arg1 didTapContact:(id)arg2;

@end

