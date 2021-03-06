/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNInboxViewModel;

@interface MNInboxDataSource : NSObject {

	MNInboxViewModel* _inboxViewModel;

}

@property (nonatomic,copy) MNInboxViewModel * inboxViewModel;              //@synthesize inboxViewModel=_inboxViewModel - In the implementation block
-(void)setInboxViewModel:(MNInboxViewModel *)arg1 ;
-(id)inboxRowAtIndexPath:(id)arg1 ;
-(id)keyedInboxRowAtIndexPath:(id)arg1 ;
-(id)indexPathForThreadListSectionWithIndex:(unsigned long long)arg1 ;
-(BOOL)sectionIsThreadSection:(unsigned long long)arg1 ;
-(MNInboxViewModel *)inboxViewModel;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)titleForSection:(unsigned long long)arg1 ;
@end

