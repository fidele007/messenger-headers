/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComponentTableViewDataSourceEventListener <NSObject>
@optional
-(void)dataSource:(id)arg1 willEnqueueChangeset:(Changeset*)arg2;
-(void)dataSource:(id)arg1 didEnqueueChangeset:(Changeset*)arg2;
-(void)dataSourceWillBeginUpdates:(id)arg1;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2;
-(void)dataSourceWillReloadRowHeights:(id)arg1;
-(void)dataSourceDidReloadRowHeights:(id)arg1;

@end

