/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Messenger/FBCancelable.h>

@class FBOmnistoreCollection, FBContactSyncUserFactory, NSString, NSDictionary, NSArray;

@interface FBContactStoreContactSearchOperation : NSOperation <FBCancelable> {

	FBOmnistoreCollection* _collection;
	FBContactSyncUserFactory* _userFactory;
	NSString* _glob;
	NSDictionary* _fieldNamesWithTokens;
	NSDictionary* _prerequisites;
	unsigned _fetchLimit;
	NSString* _filterQuery;
	NSArray* _paramValues;
	NSString* _sortFieldName;
	unsigned long long _sortDirection;
	NSArray* _peopleArray;

}

@property (nonatomic,copy,readonly) NSArray * peopleArray;              //@synthesize peopleArray=_peopleArray - In the implementation block
-(NSArray *)peopleArray;
-(id)initWithCollection:(id)arg1 userFactory:(id)arg2 filterQuery:(id)arg3 fieldNamesWithTokens:(id)arg4 prerequisites:(id)arg5 sortFieldName:(id)arg6 sortDirection:(unsigned long long)arg7 fetchLimit:(unsigned)arg8 ;
-(id)initWithCollection:(id)arg1 userFactory:(id)arg2 filterQuery:(id)arg3 paramValues:(id)arg4 sortFieldName:(id)arg5 sortDirection:(unsigned long long)arg6 fetchLimit:(unsigned)arg7 ;
-(void)main;
@end

