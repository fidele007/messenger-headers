/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBGraphQLConnectionControllerConfiguration : NSObject {

	NSString* _connectionDescription;
	/*^block*/id _configureServiceBlock;
	/*^block*/id _loadRequestUUIDBlock;
	/*^block*/id _pageExtractionBlock;
	/*^block*/id _addLoadedPageBlock;

}

@property (nonatomic,copy,readonly) NSString * connectionDescription;              //@synthesize connectionDescription=_connectionDescription - In the implementation block
@property (nonatomic,copy,readonly) id configureServiceBlock;                      //@synthesize configureServiceBlock=_configureServiceBlock - In the implementation block
@property (nonatomic,copy,readonly) id loadRequestUUIDBlock;                       //@synthesize loadRequestUUIDBlock=_loadRequestUUIDBlock - In the implementation block
@property (nonatomic,copy,readonly) id pageExtractionBlock;                        //@synthesize pageExtractionBlock=_pageExtractionBlock - In the implementation block
@property (nonatomic,copy,readonly) id addLoadedPageBlock;                         //@synthesize addLoadedPageBlock=_addLoadedPageBlock - In the implementation block
-(id)initWithConnectionDescription:(id)arg1 configureServiceBlock:(/*^block*/id)arg2 loadRequestUUIDBlock:(/*^block*/id)arg3 pageExtractionBlock:(/*^block*/id)arg4 addLoadedPageBlock:(/*^block*/id)arg5 ;
-(NSString *)connectionDescription;
-(id)configureServiceBlock;
-(id)loadRequestUUIDBlock;
-(id)pageExtractionBlock;
-(id)addLoadedPageBlock;
@end
