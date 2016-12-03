/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBContactImporterLookupResponseParsedUsers : NSObject {

	NSArray* _matchedUsers;
	NSArray* _unmatchedUsers;

}

@property (nonatomic,copy,readonly) NSArray * matchedUsers;                //@synthesize matchedUsers=_matchedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unmatchedUsers;              //@synthesize unmatchedUsers=_unmatchedUsers - In the implementation block
-(id)initWithMatchedUsers:(id)arg1 andUnmatchedUsers:(id)arg2 ;
-(NSArray *)matchedUsers;
-(NSArray *)unmatchedUsers;
@end

