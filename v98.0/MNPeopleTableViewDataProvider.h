/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleTableViewDataProvider <NSObject>
@required
-(long long)absoluteRowIndexForIndexPath:(id)arg1;
-(id)personForIndexPath:(id)arg1;
-(unsigned long long)peopleCount;
-(id)conversationInitiatorIdentifier:(long long)arg1;
-(unsigned long long)topFriendsCount;
-(id)titleForHeaderInSection:(long long)arg1;

@end

