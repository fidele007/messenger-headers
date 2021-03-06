/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(NSArray *)unmatchedUsers;
-(NSArray *)matchedUsers;
@end

