/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAvatarPickerControllerDelegate <NSObject>
@optional
-(void)avatarPickerDidCancel:(id)arg1;
-(void)avatarPickerWillRemoveObject:(id)arg1;
-(void)avatarPickerValueDidChange:(id)arg1;
-(void)avatarPicker:(id)arg1 searchFieldDidChangeHeight:(id)arg2;
-(void)avatarPicker:(id)arg1 searchFieldKeyboardReturnButtonPressed:(id)arg2;

@required
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;

@end
