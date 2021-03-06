/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <Messenger/Messenger-Structs.h>
@interface CKTransactionalComponentDataSourceConfiguration : NSObject {

	CKSizeRange _sizeRange;
	Class _componentProvider;
	id<NSObject> _context;

}

@property (nonatomic,readonly) Class componentProvider;              //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                 //@synthesize context=_context - In the implementation block
-(const CKSizeRange*)sizeRange;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const CKSizeRange*)arg3 ;
-(Class)componentProvider;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)context;
@end

