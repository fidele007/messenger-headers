/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLConnectionStoreLocationBuilder : NSObject {

	NSString* _cursor;
	BOOL _hasAnotherPage;
	BOOL _isLoading;
	unsigned long long _type;

}
+(id)graphQLConnectionStoreLocation;
+(id)graphQLConnectionStoreLocationFromExistingGraphQLConnectionStoreLocation:(id)arg1 ;
-(id)withCursor:(id)arg1 ;
-(id)withHasAnotherPage:(BOOL)arg1 ;
-(id)withIsLoading:(BOOL)arg1 ;
-(id)withType:(unsigned long long)arg1 ;
-(id)build;
@end

