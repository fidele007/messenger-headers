/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, MNPeopleCellFactory, NSString;

@interface MNSyncPersonsDialogListDataSource : NSObject <UITableViewDataSource> {

	NSArray* _syncPersons;
	MNPeopleCellFactory* _peopleCellFactory;

}

@property (nonatomic,retain) NSArray * syncPersons;                 //@synthesize syncPersons=_syncPersons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPeopleCellFactory:(id)arg1 ;
-(NSArray *)syncPersons;
-(void)setSyncPersons:(NSArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
