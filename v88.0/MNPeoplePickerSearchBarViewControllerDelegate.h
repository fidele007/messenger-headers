/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeoplePickerSearchBarViewControllerDelegate <NSObject>
@optional
-(void)peoplePickerSearchBarController:(id)arg1 didDeselectContact:(id)arg2;
-(double)containerTopContentInsetForPeoplePickerSearchBarViewController:(id)arg1;

@required
-(void)peoplePickerSearchBarController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3;
-(BOOL)peoplePickerSearchBarController:(id)arg1 shouldShowPersonFromSearch:(id)arg2;
-(void)peoplePickerSearchBarControllerWillBeginSearch:(id)arg1;
-(void)peoplePickerSearchBarControllerWillEndSearch:(id)arg1;
-(void)peoplePickerSearchBarControllerDidChangePickedContacts:(id)arg1;
-(id)peoplePickerSearchBarControllerStringForSearchBarPlaceholderText:(id)arg1;

@end

