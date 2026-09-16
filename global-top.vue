<script setup>
import { useNav } from '@slidev/client'

// 從 useNav() 中取出 currentPage, currentLayout 與頁面跳轉方法 go
const { currentPage, currentLayout, go } = useNav()

// 定義導向目錄頁的方法
const tocPage = () => {
  go('Outline') // 直接傳入投影片別名 (routeAlias)
}
</script>

<template>
    <div 
        v-if="currentPage !== 1 && currentPage !== 2 && currentLayout !== 'cover'"
        class="fixed top-2 right-2 z-50 flex gap-2"
    >
        <button 
            @click="tocPage"
            class="p-2 rounded-full bg-gray-400 bg-opacity-10 hover:bg-opacity-20 border border-gray-500 border-opacity-20 backdrop-blur-md transition-all active:scale-90 !text-current"
            title="Outline"
        >
            <lucide:table-of-contents class="text-xl opacity-60" />
        </button>
    </div>
</template>