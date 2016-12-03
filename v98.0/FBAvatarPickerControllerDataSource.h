/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAvatarTaggingTagSearchDataSource.h>

@class NSPredicate;

@interface FBAvatarPickerControllerDataSource : FBAvatarTaggingTagSearchDataSource {

	NSPredicate* _predicate;

}

@property (assign,nonatomic,__weak) id<UITableViewDataSource><FBAvatarTaggingSectionDataSourceDelegate> delegate; 
@property (nonatomic,retain) NSPredicate * predicate;                                                                          //@synthesize predicate=_predicate - In the implementation block
-(void)searchProviderHasAvatars:(id)arg1 andStubs:(id)arg2 forText:(id)arg3 fromRemote:(BOOL)arg4 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSearchText:(id)arg1 ;
@end

