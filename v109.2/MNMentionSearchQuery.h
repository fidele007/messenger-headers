/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMentionSearchQuery : FBValueObject <NSCopying> {

	NSString* _searchText;
	NSString* _wholeText;
	NSRange _searchTextRange;

}

@property (nonatomic,copy,readonly) NSString * searchText;              //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) NSRange searchTextRange;                 //@synthesize searchTextRange=_searchTextRange - In the implementation block
@property (nonatomic,copy,readonly) NSString * wholeText;               //@synthesize wholeText=_wholeText - In the implementation block
-(id)initWithSearchText:(id)arg1 searchTextRange:(NSRange)arg2 wholeText:(id)arg3 ;
-(NSRange)searchTextRange;
-(NSString *)searchText;
-(NSString *)wholeText;
@end

