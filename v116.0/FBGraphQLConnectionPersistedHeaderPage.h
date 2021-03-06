/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionPersistedPageProtocol.h>

@class NSDate, NSString, NSArray;

@interface FBGraphQLConnectionPersistedHeaderPage : NSObject <FBGraphQLConnectionPersistedPageProtocol> {

	NSDate* _timestamp;
	BOOL _hasPreviousPage;
	NSString* _cursor;
	NSArray* _bodyPagePersistedCursors;

}

@property (nonatomic,copy,readonly) NSString * cursor;                               //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bodyPagePersistedCursors;              //@synthesize bodyPagePersistedCursors=_bodyPagePersistedCursors - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousPage;                                 //@synthesize hasPreviousPage=_hasPreviousPage - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCursor:(id)arg1 bodyPagePersistedCursors:(id)arg2 hasPreviousPage:(BOOL)arg3 timestamp:(id)arg4 ;
-(NSArray *)bodyPagePersistedCursors;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(BOOL)hasPreviousPage;
-(NSString *)cursor;
@end

