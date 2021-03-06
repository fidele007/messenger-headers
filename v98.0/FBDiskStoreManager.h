/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@class NSString;

@interface FBDiskStoreManager : NSObject <FBInvalidating> {

	shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>* _storeManager;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskStore *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskStore *>, FBDiskCacheConfig *> > >* _unmanagedMap;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBPersistentKeyValueStore *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBPersistentKeyValueStore *>, FBDiskCacheConfig *> > >* _pkvsMap;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskCache *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskCache *>, FBDiskCacheConfig *> > >* _diskCacheMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)forceCleanseOnInit;
+(void)setForceCleanseOnInit:(BOOL)arg1 ;
-(id)diskCacheForName:(id)arg1 ;
-(id)diskCacheForConfig:(id)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 ;
-(id)diskStoreForName:(id)arg1 ;
-(void)trashStoreOnStartup:(unsigned)arg1 ;
-(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
-(id)persistentKeyValueStoreForName:(id)arg1 ;
-(id)diskStoreForConfig:(id)arg1 ;
-(id)persistentKeyValueStoreForConfig:(id)arg1 ;
-(id)_diskStoreForName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)_persistenKeyValueStoreForName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)initWithStoreManager:(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>*)arg1 ;
-(ValueWrapper<FBDiskStore *>)createUnmanagedStoreWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(ValueWrapper<FBPersistentKeyValueStore *>)createPKVSWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(ValueWrapper<FBDiskCache *>)createDiskCacheWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
@end

