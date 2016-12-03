/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNOmnistoreCollectionManagerDelegate;
@class FBOmnistore, FBOmnistoreCollectionName, FBOmnistoreCollection;

@interface MNOmnistoreCollectionManager : NSObject {

	FBOmnistore* _omnistore;
	FBOmnistoreCollectionName* _collectionName;
	FBOmnistoreCollection* _collection;
	id<MNOmnistoreCollectionManagerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBOmnistoreCollectionName * collectionName;                     //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,readonly) FBOmnistoreCollection * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<MNOmnistoreCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleDeltaCallback:(id)arg1 ;
-(id)initWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(id)getObjectWithPrimaryKey:(id)arg1 ;
-(void)setDelegate:(id<MNOmnistoreCollectionManagerDelegate>)arg1 ;
-(id<MNOmnistoreCollectionManagerDelegate>)delegate;
-(void)start;
-(FBOmnistoreCollectionName *)collectionName;
-(FBOmnistoreCollection *)collection;
@end

