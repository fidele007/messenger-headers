/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleSuggestionsViewControllerDelegate <NSObject>
@optional
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableActionButtonForContact:(id)arg2;
-(void)peopleSuggestionsViewControllerDidFetchEmptyList:(id)arg1;
-(void)peopleSuggestionsViewController:(id)arg1 didFetchSections:(id)arg2;
-(void)peopleSuggestionsViewController:(id)arg1 didFetchPreselectedContacts:(id)arg2;
-(long long)peopleSuggestionsViewControllerAccessoryTypeForCellWithContact:(id)arg1;
-(id)peopleSearchDataSourceAccessoryLabelForCellWithContact:(id)arg1;

@required
-(BOOL)peopleSuggestionsViewController:(id)arg1 shouldShowContact:(id)arg2;
-(BOOL)peopleSuggestionsViewController:(id)arg1 didTapContact:(id)arg2;
-(void)peopleSuggestionsViewController:(id)arg1 didTapActionButtonWithContact:(id)arg2;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldSelectCellWithContact:(id)arg2;
-(BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableCellWithContact:(id)arg2;
-(void)peopleSuggestionViewControllerDidShowNullState:(id)arg1;

@end

