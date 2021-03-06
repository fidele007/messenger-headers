/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCacheDescriptor.h>
#import <Messenger/FBGraphObjectPagingLoaderDelegate.h>

@class NSSet, NSString, FBGraphObjectPagingLoader;

@interface FBFriendPickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	BOOL _hasCompletedFetch;
	BOOL _usePageLimitOfOne;
	NSSet* _fieldsForRequest;
	NSString* _userID;
	FBGraphObjectPagingLoader* _loader;

}

@property (nonatomic,copy) NSSet * fieldsForRequest;                          //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,copy) NSString * userID;                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                          //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (assign,nonatomic) BOOL usePageLimitOfOne;                          //@synthesize usePageLimitOfOne=_usePageLimitOfOne - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(id)initWithUserID:(id)arg1 fieldsForRequest:(id)arg2 ;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(void)setUsePageLimitOfOne:(BOOL)arg1 ;
-(NSSet *)fieldsForRequest;
-(BOOL)usePageLimitOfOne;
-(id)initWithUserID:(id)arg1 ;
-(id)initWithFieldsForRequest:(id)arg1 ;
-(void)setUsePageLimitOfOne;
-(BOOL)hasCompletedFetch;
-(void)dealloc;
-(id)init;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(FBGraphObjectPagingLoader *)loader;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

