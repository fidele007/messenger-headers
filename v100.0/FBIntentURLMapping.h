/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBIntentURLMapping : NSObject {

	NSArray* _pathComponents;
	NSArray* _queryParameters;
	/*^block*/id _storeURL;

}

@property (nonatomic,copy,readonly) NSArray * pathComponents;               //@synthesize pathComponents=_pathComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy,readonly) id storeURL;                            //@synthesize storeURL=_storeURL - In the implementation block
+(id)newWithPathComponents:(id)arg1 ;
+(id)newWithPathComponents:(id)arg1 queryParameters:(id)arg2 storeURL:(/*^block*/id)arg3 ;
+(id)newWithPathComponents:(id)arg1 queryParameters:(id)arg2 ;
-(NSArray *)pathComponents;
-(NSArray *)queryParameters;
-(id)storeURL;
-(BOOL)matchesURL:(id)arg1 ;
@end

