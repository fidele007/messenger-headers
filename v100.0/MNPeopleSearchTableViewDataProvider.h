/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleSearchTableViewDataProvider <NSObject>
@required
-(long long)absoluteRowIndexForIndexPath:(id)arg1;
-(unsigned long long)peopleCount;
-(id)conversationInitiatorIdentifier:(long long)arg1;
-(BOOL)canShowContextInTwoLines;
-(long long)searchSectionForTableSection:(long long)arg1;
-(id)resultForIndexPath:(id)arg1;
-(BOOL)shouldUseTopResultCellForIndexPath:(id)arg1;
-(BOOL)shouldUseLargeProfilePic;
-(id)titleForHeaderInSection:(long long)arg1;

@end

